def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

if __name__ == "__main__":
    input_string = input().strip()
    print(prefixes(input_string))