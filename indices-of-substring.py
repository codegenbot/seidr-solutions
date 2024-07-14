```
def indices_of_substring(text):
    try:
        target = input()
        indices = [i for i in range(len(text)) if text.startswith(target, i)]
        return str(indices)
    except Exception as e:
        return 'Error: ' + str(e)