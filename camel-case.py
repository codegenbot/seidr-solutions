def camel_case(s):
    words = s.replace("-", " ").split()
    result = ""
    for i, word in enumerate(words):
        if i > 0:
            result += word.capitalize()
        else:
            result += word
        if i < len(words) - 1:  
            result += words[i+1].replace("-", "")[0].upper() 
    return result