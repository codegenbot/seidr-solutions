import sys

def all_prefixes(string):
    return [string[:i + 1] for i in range(len(string)]

if __name__ == "__main__":
    input_string = input().rstrip()
    prefixes = all_prefixes(input_string)
    print(prefixes)