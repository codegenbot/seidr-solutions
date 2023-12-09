def select_words(s, n):
    import re
    
    # Use a regular expression to extract only the alphanumeric words from the input string
    words = re.findall(r'\w+', s)
    result = []
    for word in words:
        if len(word) == n and word.isalpha():
            result.append(word)
    return result