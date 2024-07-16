def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            end_index = i + len(target) - 1
            while True:
                if text[end_index:].startswith(target):
                    end_index += len(target)
                else:
                    break
            result.append((start_index, end_index))
    return [i[0] for i in result]