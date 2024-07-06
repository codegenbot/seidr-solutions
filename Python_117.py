
def select_words(s, n):
    words = s.split()
    if n <= 0:
        return []
    else:
        return [word[1:] for word in words if len([c for c in word[1:] if c.islower()]) == n]

Example Input and output:
s = "Hello World! This is a test string"
n = 2
select_words(s, n) => ["World", "test"]