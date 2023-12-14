
[SEED]
def main():
    # Implement your function below.
    def camelCase(s):
        return s
    [SOLUTION]
    def camelCase(s):
        words = s.split('-')
        for i in range(len(words)):
            if not words[i].isalpha():
                return s
            words[i] = words[i][0].upper() + words[i][1:]
        return ' '.join(words)
    [VERIFY]
    def check(s):
        for w in s.split(' '):
            if not (w.isalpha() and w.islower()):
                return False
        return True
    from random import randint, choice
    for _ in range(1000):
        n = randint(1, 10)
        words = []
        for _ in range(n):
            if randint(0, 1):
                w = ''.join([choice('abcdefghijklmnopqrstuvwxyz') for i in range(randint(2, 10))])
                words.append(w)
            else:
                w = ''.join([choice('abcdefghijklmnopqrstuvwxyz'), choice('ABCDEFGHIJKLMNOPQRSTUVWXYZ')]) + ''.join([choice('abcdefghijklmnopqrstuvwxyz') for i in range(randint(2, 10))])
                words.append(w)
        s = ' '.join(words)
        res = camelCase(s)
        if not check(res):
            print('Fail on', s)
            return False
    print('All OK')
    return True
[TEST]
main()