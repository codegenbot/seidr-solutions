def histogram(test=None):
    from collections import Counter
    if test is None:
        test = input().strip()
    if not test:
        print("", flush=True)
        return
    counts = Counter(test.split())
    max_count = max(counts.values())
    result = {k: v for k, v in counts.items() if v == max_count}
    print(result, flush=True)

if __name__ == "__main__":
    histogram()