def main():
    text = input("Enter the text: ")
    target = input("Enter the target: ")

    def indices_of_substring(text, target):
        result = []
        pos = 0
        while pos < len(text):
            pos = text.find(target, pos)
            if pos == -1:
                break
            result.append(pos + 1)
            pos += 1

        return result

    print(indices_of_substring(text, target))


if __name__ == "__main__":
    main()