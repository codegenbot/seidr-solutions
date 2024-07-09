def main():
    text = input("Enter the text: ")
    target = input("Enter the target: ")

    def indices_of_substring(text, target):
        result = []
        i = 0
        while True:
            pos = text[i:].find(target)
            if pos == -1:
                break
            result.append(i + pos)
            i += pos + 1

        return result

    print(indices_of_substring(text, target))

if __name__ == "__main__":
    main()