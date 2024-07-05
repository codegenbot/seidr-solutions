def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

import sys
string = sys.stdin.read().strip()
all_prefixes = generate_substrings(string)
check(all_prefixes)