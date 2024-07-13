```Python
def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    return text

def main():
    while True:
        text = input("Enter your text (or 'q' to quit): ").strip()
        if text.lower() == 'q':
            break
        if ' ' in text:
            print(fix_spaces(text))
        else:
            print(text)

if __name__ == "__main__":
    main()