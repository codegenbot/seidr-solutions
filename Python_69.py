def search(lst):
    from collections import Counter
    freq = Counter(lst)
    result = -1
    for num, count in freq.items():
        if count >= num:
            result = max(result, num)
    return result

if __name__ == "__main__":
    try:
        input_line = input().strip()
        if input_line:
            lst = list(map(int, input_line.split()))
            if all(0 <= x <= 100 for x in lst):
                print(search(lst))
            else:
                print(-1)
        else:
            print(-1)
    except ValueError:
        print(-1)