def third_order_string(s: str):
    words = s.split()
    sorted_words = sorted(words)
    result = " ".join(sorted_words)
    return result