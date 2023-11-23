def Strongest_Extension(class_name, extensions):
    extensions.sort(key=lambda x: x.count('A') - x.count('a'), reverse=True)
    return f"{class_name}.{extensions[0]}"