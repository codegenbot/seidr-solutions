def main():
    text = input()
    target = input()
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)
    for index in indices:
        print(index)


if __name__ == "__main__":
    main()