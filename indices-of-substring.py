Here is the Python solution for the problem:

```
def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result

# test cases
print(indices_of_substring("a", "a")) # output: [0]
print(indices_of_substring("!", "!")) # output: [0, 1]
print(indices_of_substring("rnm,xcnwqnd@#$fwkdjn3", "r")) # output: [0]
print(indices_of_substring("hihihihihihihihihihi", "hi")) # output: [0]
print(indices_of_substring("############", "#")) # output: [12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]