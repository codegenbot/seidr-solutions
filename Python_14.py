import sys

def all_prefixes(string: str):
    return [string[:i + 1] for i in range(len(string)]

string = sys.stdin.readline().strip()
print(all_prefixes(string))