def main():
    num_strings = int(input("Enter the number of strings: "))
    strings = []

    for i in range(num_strings):
        string = input(f"Enter string {i+1}: ")
        strings.append(string)

    result = concatenate(strings)
    print(result)


def concatenate(strings: List[str]) -> str:
    return "".join(strings)