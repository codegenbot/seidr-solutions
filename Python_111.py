def histogram(test):
    from collections import Counter

    counts = Counter(test.split())
    max_count = max(counts.values())
    return {k: v for k, v in counts.items() if v == max_count}

if __name__ == "__main__":
    user_input = input("Enter the text: ")
    result = histogram(user_input)
    print(result)