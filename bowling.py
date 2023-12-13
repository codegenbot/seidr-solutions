def calculate_bowling_score(frames):

  def get_frame_score(frame):
    if frame == 'X':
      return 10
    elif '/' in frame:
      return 10 - int(frame[0])
    else:
      return sum([int(char) for char in frame if char.isdigit()])

  score = 0
  for i in range(len(frames)):
    if frames[i] == 'X':
      score += get_frame_score(frames[i]) + get_frame_score(frames[i+1]) + get_frame_score(frames[i+2])
    else:
      score += get_frame_score(frames[i])
  
  return score