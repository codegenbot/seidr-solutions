def is_bored(S):
    if S != 'q':
        return sum(1 for s in S.split('. ') + S.split('? ') + S.split('! ') if s.strip().lower().startswith('i'))
    else:
        return None