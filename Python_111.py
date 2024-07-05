def histogram(test):
    import re
    from collections import Counter
    
    cleaned_test = re.sub(r'\W+', ' ', test.lower().strip())
    count = Counter(cleaned_test.split())
    max_count = max(count.values(), default=0)
    
    return {k: v for k, v in count.items() if v == max_count}

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    test = input().strip()
    result = histogram(test)
    print(result)