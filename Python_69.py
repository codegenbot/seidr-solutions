def search(lst):
    from collections import Counter
    freq = Counter(lst)
    return max((num for num, count in freq.items() if count >= num), default=-1)

if __name__ == "__main__":
    try:
        line = input().strip()
        lst = list(map(int, line.split())) if line else []
        if lst and all(0 <= x <= 100 for x in lst):
            print(search(lst))
        else:
            print(-1)
    except ValueError:
        print(-1)