def wordLadder(inputString):
    words = inputString.split(' ')
    result = []
    for i in range(1, len(words)):
        if len(set(word[i-1]) ^ set(word[i])) == 1:
            if len(result) < i - 1 or len(result[-1].get('words', [])) > 0:
                result.append({'length': i, 'words': [word[0]]})
            while True:
                temp_words = word[i-1]
                for j in range(len(word[i])):
                    for k in string.ascii_lowercase:
                        new_word = temp_words[:j] + k + temp_words[j+1:]
                        if new_word not in result[-1]['words'] and new_word != word[i]:
                            result.append({'length': i+1, 'words': result[-1]['words'] + [new_word]})
                            break
                    else:
                        continue
                    break
                if len(result[-1]['words']) == i:
                    break
        elif len(set(word[i-1]) ^ set(word[i])) > 1 or i - 1 < 0:
            return []
    return result