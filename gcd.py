def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    text_len = len(text)
    target_len = len(target)
    result = []
    for i in range(text_len - target_len + 1):
        if text[i:i+target_len] == target:
            result.append(i)
    return result