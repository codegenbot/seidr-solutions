
def select_words(s, n):
    words = s.split()
    for word in words:
        if len(word) == n and word[0].isalpha():
            return word

# test the function
test1 = "hello world"
test2 = 5
print(select_words(test1, test2)) # should print "hello"
