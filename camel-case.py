def camel_case(s): 
    result = s[0].lower() 
    for word in s.split()[1:]: 
        if word: 
            result += word.capitalize() 
    return result