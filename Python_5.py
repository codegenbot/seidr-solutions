def intersperse(a, b):
    return [b] + [i for sub in ([b]+list(a)+[b]) for i in (sub if not sub==b else [sub,[b][1:]] )][0]