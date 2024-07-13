def fix_spaces(text):
    text = text.strip().replace(" ", "_")
    while "--" in text:
        text = text.replace("--", "-")
    return text


def main():
    while True:
        text = input("Enter your text (or 'q' to quit): ")
        if text.lower() == "q":
            break
        if " " in text:
            print(fix_spaces(text).strip().replace("_- ", "_-"))
        else:
            print(text)


if __name__ == "__main__":
    main()