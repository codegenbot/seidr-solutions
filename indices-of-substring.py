Here is the solution:

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

input_text = input()
target_string = int(input())

print(indices_of_substring(input_text, str(target_string)))