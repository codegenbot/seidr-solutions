def histogram(test):
    from collections import Counter
    import re

    if not test:
        return {}

    cleaned_test = re.sub(r"\W+", " ", test.lower()).strip()
    words = cleaned_test.split()
    count = Counter(words)

    if not count:
        return {}

    max_count = max(count.values())
    return {k: v for k, v in count.items() if v == max_count}

if __name__ == "__main__":
    try:
        input_text = input().strip()
        result = histogram(input_text)
        print(result)
    except EOFError:
        pass  # Handle end of input