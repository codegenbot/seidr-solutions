import sys
from collections import Counter

def search(lst):
    freq = Counter(lst)
    result = -1
    for num, count in freq.items():
        if count >= num:
            result = max(result, num)
    return result

if __name__ == "__main__":
    try:
        lines = sys.stdin.read().strip()
        if lines:
            lst = list(map(int, lines.split()))
            if all(0 <= x <= 100 for x in lst):
                print(search(lst))
            else:
                print(-1)
        else:
            print(-1)
    except ValueError:
        print(-1)