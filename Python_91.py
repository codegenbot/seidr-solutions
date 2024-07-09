def is_bored(S):
    return len([i for i in S.split('. ') + S.split('? ') + S.split('! ') if i.startswith('I ')])