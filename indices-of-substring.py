def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [str(i) for i in range(len(text)) if text.startswith(target, i)]
    print(" ".join(indices))


indices_of_substring()