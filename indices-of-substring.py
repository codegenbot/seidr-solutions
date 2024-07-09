```
def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        result.append(pos)
        i = pos + 1

    print(result)

if __name__ == "__main__":
    text = input("Enter the text: ")
    target = input("Enter the target: ")
    indices_of_substring(text, target)