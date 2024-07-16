Here is the solution:

def indices_of_substring(text):
    try:
        text_index = int(input())
        target = input()
        indices = [i for i in range(len(text)) if text.startswith(target, i)]
        return str(indices) if indices else '0'
    except:
        return '0'