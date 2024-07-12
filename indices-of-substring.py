```
def indices_of_substring(text):
    targets = input().split(',')
    result = [[i for i in range(len(text)) if text.startswith(t, i)] 
              for t in [t.strip() for t in targets]]
    return [index for sublist in result for index in sublist]