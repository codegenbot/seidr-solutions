```
def sorted_list_sum(lst):
    words = sorted([(len(word), len(word) % 2 != 0) for word in lst])
    odd_words = [word for length, parity in words if not parity]
    even_words = [word for length, parity in words if parity]
    result = ""
    for i in range(max(len(even_words), len(odd_words))):
        if i < len(even_words):
            result += even_words[i]
        if i < len(odd_words):
            result += odd_words[i]
    return result