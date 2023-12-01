def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes


if __name__ == "__main__":
    string = input()
    prefixes = all_prefixes(string)
    print(prefixes)