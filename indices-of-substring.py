def indices_of_substring(text):
    target = input().split(",")
    result = [(i.start(), i.end()) for t in target 
              for i in [m.span() for m in re.finditer(t, text)]]
    return result