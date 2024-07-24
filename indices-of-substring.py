def indices_of_substring(text):
    return [i for i in range(len(text)) if text.startswith(str(i) + text[i:], i)]


text = input()
n = int(input())
print(indices_of_substring(text[:n]))