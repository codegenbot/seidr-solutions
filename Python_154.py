def cycpattern_check(word1, word2):
    return any(word2 in word1[i:] + word1[:i] for i in range(len(word1)))