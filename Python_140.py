```
def fix_spaces(text):
    if text:
        return text.strip().replace(" +", " ").replace("--", "-").replace("\n", "").replace(" ", "_")
    else:
        return ""

if __name__ == "__main__":
    text = input("Enter a string: ")
    print(fix_spaces(text))