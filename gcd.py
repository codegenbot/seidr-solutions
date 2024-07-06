
def gcd(a, b):
    while b != 0:
        if a % b == 0:
            return b
        else:
            a = b
            b = a % b
    return a

def indices_of_substring(text, target):
    window_size = len(target)
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target:
            indices.append(i)
        # If the current index is the last character of the target,
        # add it to the list of indices as well.
        if i + window_size == len(text):
            indices.append(i)
    return indices

def main():
    text = "hello world"
    target = "llo"
    result = indices_of_substring(text, target)
    print(result) # [2, 3]
    
    a = 893320
    b = 978960
    gcd = gcd(a, b)
    print(gcd) # 45450

if __name__ == "__main__":
    main()