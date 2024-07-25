def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    max_len = len(max(strings, key=len))
    longest_strs = [s for s in strings if len(s) == max_len]
    if len(longest_strs) > 0:
        return longest_strs
    else:
        return None


def main():
    n = int(input("Enter the number of strings: "))
    strings = []
    for i in range(n):
        string = input(f"Enter string {i+1}: ")
        strings.append(string)
    result = longest(strings)
    print("The longest strings are:", result)


if __name__ == "__main__":
    main()