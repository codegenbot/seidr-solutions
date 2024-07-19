def is_bored(S):
    return sum(1 for sentence in S.split('.') + S.split('?') + S.split('!') if sentence.strip().startswith('I'))