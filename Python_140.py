def fix_spaces(text):
    if text is not None and isinstance(text, str):
        text = text.strip().replace(" ", "_")
        while "__" in text:
            text = text.replace("__", "_-")
        return text
    else:
        return "Error: Invalid input type. Please enter a string."


def main():
    while True:
        text = input("Enter your text (or 'q' to quit): ")
        if text.lower() == "q":
            break
        if "_" not in text:
            print(fix_spaces(text).strip().replace("_- ", "_-"))
        else:
            print(text)


if __name__ == "__main__":
    main()