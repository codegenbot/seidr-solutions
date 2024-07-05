def main():
    s = input("Enter a string: ")
    print(decode_cyclic(s))


def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            result += s[i]
            i += 2
        else:
            result += s[i]
            i += 1
    return result


if __name__ == "__main__":
    main()