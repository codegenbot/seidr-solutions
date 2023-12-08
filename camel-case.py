```
def camel_case(string):
    # Split the input string into individual words
    words = re.split(r'-', string)
    
    # Capitalize the first letter of each word
    return ''.join([word.title() for word in words])
```