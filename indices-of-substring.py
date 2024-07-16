```
text = input("Enter the text: ")
target = input("Enter the target string: ")

def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start_index = i
            while True:
                start_index = text.find(target, start_index)
                if start_index == -1:
                    break
                result.append(start_index)
                start_index += 1
    return result

print(indices_of_substring(text))