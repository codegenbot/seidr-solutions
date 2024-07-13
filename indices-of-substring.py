def indices_of_substring(text):
    target = [x.strip() for x in input().split(",")]
    return [(i.start(), i.end()) for t in target 
            for i in (m.start() for m in enumerate(text) if text[i].startswith(t))]