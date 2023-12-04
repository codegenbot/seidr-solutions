```
def camel_case(string):
    words = string.split("-")
    for i in range(len(words)):
        if words[i] == "":
            words[i] = ""
        else:
            words[i] = words[i].title()
    return "".join(words)
``` 
This code first splits the input string into a list of words using the `split()` method, with "-" as the delimiter. It then iterates over each word in the list and checks if it is empty or not. If the word is not empty, it applies the `title()` method to convert the first character to uppercase and the rest of the characters to lowercase. Finally, it joins all the words back together into a single string using the `join()` method and returns the result.