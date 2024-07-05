def histogram(test=None):
    from collections import Counter
    if test is None:
        test = input().strip()
    if not test:
        return
    counts = Counter(test.split())
    max_count = max(counts.values())
    result = [k for k, v in counts.items() if v == max_count]
    for word in result:
        print(word)

if __name__ == "__main__":
    histogram()